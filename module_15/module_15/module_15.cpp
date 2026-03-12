
#include <iostream>
#include <thread>
#include <atomic>
#include <mutex>
#include <future>

std::atomic<int> counter = 0;
std::mutex sync;

//void decrement(int value) {
//	while (counter > -10) {
//
//		counter--;
//		std::cout << "decrement\t" << counter << std::endl;
//		std::this_thread::sleep_for(std::chrono::milliseconds(50));
//
//	}
//}

//class TestThread
//{
//public:
//	TestThread() {}
//	
//	void start() {
//		_thread = std::jthread(&TestThread::calculate, this);
//	}
//	
//	void calculate() {
//		while (counter < 10) {
//
//			std::lock_guard guard(sync);
//			counter++;
//			std::cout << "calculate\t\t" << counter << std::endl;
//		}
//	}
//
//private:
//	std::jthread _thread;
//
//};

void getPi(std::promise<double> prom) {
	std::this_thread::sleep_for(std::chrono::seconds(2));
	prom.set_value(3.14);
}


int main()
{
	std::cout << "Hello multithreader!\n";

	std::future<double> resultPi = std::async(std::launch::async, []() // этот код лучше
		{
		std::this_thread::sleep_for(std::chrono::seconds(2));
		return 3.14;
		});
	resultPi.get();

	std::promise<double> prom_res;
	std::future<double> f = prom_res.get_future();
	std::jthread pi_thread(getPi, std::move(prom_res));
	auto result = f.get();
	std::cout << result << std::endl;
	
	//std::jthread thrd1([]() {
	//	while (counter < 10) {

	//		{
	//			std::lock_guard guard(sync);
	//			counter++;
	//			std::cout << "lambda\t\t" << counter << std::endl;

	//			if (true) continue;
	//		}
	//		std::this_thread::sleep_for(std::chrono::milliseconds(100));
	//	}
	//});

	//std::jthread thrd2(decrement);

	//TestThread testthread;
	//std::jthread thrd3(&TestThread::calculate, &testthread);

	//std::cout << "after thread start" << std::endl;
	
}
