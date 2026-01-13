

#include <iostream>
#include <memory>
#include <string>

std::string convert_async(std::weak_ptr<float>) {
    // converter implementation
    return "OK"; // Добавьте возврат значения для примера
}

void convert_async(float* fl_values) {
    // converter algorithm
    // save file
}

void convertImage(int* image, int height, int width) {
    float* fl_array = new float[height * width];
    std::shared_ptr<float> fl_shrd = std::make_shared<float>(image[0]); // инициализация, просто для примера

    for (int i = 0; i < height * width; ++i) {
        fl_array[i] = image[i];
    }

    if (convert_async(std::weak_ptr<float>(fl_shrd)) != "OK") {
        delete[] fl_array;  // освобождение памяти
        return;
    }
    delete[] fl_array;  // освобождение памяти
}

void modify(const int& value) 
{
   // value+=10; //не можем изменить значение value
}

int main() {
    
    std::cout << "Hello world!\n";
    int new_val = 55;
    modify(new_val);
    std::cout << new_val << std::endl;
    
    return 0;
    /*std::cout << "Hello world!\n";
    int new_val = 55;
    modify(&new_val);
    std::cout << new_val << std::endl;

    return 0;*/
    
    int val = 12;
    int val2 = 24;
    int* p = &val; // change pointer
    p = &val2;     // change data by pointer

    const int* pcx = &val; // указаьтель на константу
    pcx = &val2;           // change pointer
    // *pcx = 34;          // CAN'T change data by pointer

    int* const cpx = &val; // константный указательна переменную
    //cpx = &val2;         // CAN'T change pointer
    *cpx = 44;             // change data by pointer

    const int* const cpcx = &val; // константный указатель на константу
    //cpcx = &val2;               // CAN'T change pointer
    //*cpcx = 34;                 // CAN'T change data by pointer







    
    
    
    
    return 0;
    int counter = 10;
    int& counter_link = counter;
    std::cout << counter << std::endl;

    int* counter_ptr = &counter;
     ++(*counter_ptr);
    std::cout << counter << std::endl;

    ++counter_link;
    std::cout << counter_link << std::endl;

    return 0;

    std::unique_ptr<int> u_ptr = std::make_unique<int>(12); // создание unique 
    std::unique_ptr<int> u_ptr1 = std::unique_ptr<int>(new int{ 21 }); // правильная инициализация

    int* ptr = new int{ 81 };
    std::unique_ptr<int> u_ptr2(ptr); // совместно с указателем, выделенным ранее

    return 0; // Добавим возврат в main
}


//#include <iostream>
//#include<memory>
//#include<string>
//std::string convert_async(std::weak_ptr<float>) 
//{
//	return "OK";
//};
//void convert_async(float* fl_values) {
//	// converter algorithm
//	// save file
//}
//
//void convertImage(int* image, int hight, int width) 
//{
//	float* fl_array = new float[hight * width];
//	std::shared_ptr<float> fl_shrd;
//	for (int i = 0; i < hight * width; ++i) 
//	{
//		fl_array[i] = image[i]; 
//	}
//
//	if (convert_async(fl_shrd) != "OK") 
//	{
//		delete[] fl_array;  // bed awey
//		return;
//	}
//	delete[] fl_array;  // bed awey
//}
//
//float* change_format(float* fl_format_vals) 
//{
//
//}
//
//std::string convert_async(std::weak_ptr<float>)
//{
//// converter
//}
//
//void convert_async(float* fl_values) 
//{
//// converter algorithm
////
//// save fale
//}
//
//int main() 
//{
//	std::cout << "Hello world! \n";
//
//	std::unique_ptr<int> u_ptr = std::make_unique<int>(12);   // создание unique 
//	
//	std::unique_ptr<int> u_ptr1 = std::make_unique<int>(new int{ 21 });
//
//	int* ptr = new int{ 81 };
//	std::unique_ptr<int> u_ptr2 = std::make_unique<int>(ptr);
//}






//#include <iostream>
//#include <memory>
//
//void printData(std::shared_ptr<int> val) {
//    std::cout << "use count: " << val.use_count() << std::endl;
//    std::cout << *val << std::endl;
//}
//
//int main()
//{
//    std::cout << "Hello Smart Pointers!\n";
//
//    //int* data = new int{ 18 };
//    //std::cout << *data;
//
//    std::shared_ptr<int> shrd;
//
//    std::weak_ptr<int> wk_ptr;
//    //std::shared_ptr<int> wk_ptr;
//    //std::shared_ptr<int> shrd_new = shrd; 
//
//    //std::shared_ptr<int> wk_ptr;
//    auto ptr = new int{ 18 };
//     
//    {
//        //std::shared_ptr<int> shrd(ptr);
//        //wk_ptr = shrd;
//        wk_ptr = shrd;
//
//        std:: shared_ptr<int> shrd(ptr);
//        std::cout << "use count: " << shrd.use_count() << std::endl;
//        std:: shared_ptr<int> shrd_new = shrd;
//        std::cout << "use count: " << shrd.use_count() << std::endl;
//
//        printData(shrd);
//        std::cout << "after printData " << shrd.use_count() << std::endl;
//    }
//
//    std::cout << *ptr << std::endl;
//
//}
