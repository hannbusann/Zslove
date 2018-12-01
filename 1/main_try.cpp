#include <utility>
#include <iostream>
#include <stdio.h>
// #include <Eigen/Geometry>
#include <sys/time.h>
#include <cmath>
#include <thread>
#include <string>
#include <stdlib.h>
using namespace std;


// //////////////////////////////////////////////////////////////////////////////////// TODO
 //           std:: cout << "  :"<<  << " " << std::endl;


// #include <Eigen/Core>

// using namespace std;
// #include <vector>
// #include <math.h>
// using namespace std;

///////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
// class test1
// {
// private:
//     vector<int> dd;
// public:
//     test1(vector<int>& a): dd(a)
//     {
//         for (int i = 0; i < 6; i++)
//         {
//             cout << dd.size() << endl;
//         }
//         cout << "test1 constructed" << endl;
//         cout << M_PI << endl;
//     }

// };


// class teston
// {
// private:
//     test1* tt = NULL;
// public:
//     teston(vector<int> ee){
//         tt = new test1(ee);
//     }
// };

// int main (int argc, char** argv)
// {
//     int a[7] = {1, 2, 3, 5, 6, 7, 7};
//     vector<int> c(a, a + 5);
//     test1 object(c);
//     int b[9] = {34, 46, 45, 6, 324, 546, 456, 45, 6};
//     vector<int> d(b,b+9);
//     teston objecton(c);


// }
/////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////


// int main (int argc, char** argv)
// {
//     double x = 3.0;
//     int a = 4;
//     double b =cos(a);
//     cout << cos(x)<<"    "<<b <<"    "<< cos(a) << endl;
// }

///////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

// template <class T>
// double Slopy(T &s){
//     return atan(s)*57.3;

// }

// int main (int argc, char** argv)
// {
//     double x = 1.732;
//     cout << Slopy(x) <<endl;
// }
//////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

// int main (int argc, char **argv)
// {
//     cout << M_PI << endl;
// }

// int main(int argc, char** argv)
// {
//     int i ;
//     for (i = 0; i < 5; i++)
//     {
//         cout << i <<  endl;
//     }
//     cout << i<< endl;
// }

// int main(int argc, char** argv)
// {
//     int i = 20;
//     double t = (double) (i) / 30;
//     cout << t << endl;

//     vector<int> a = {21,3,43,21,3,24};
//  	a.erase(a.begin()+3);
 	
//  	//a.insert(a.begin(), 90);

//     for(unsigned i=0;i< a.size() ;i++){
//     	cout << a[i] << endl;
//     }
//     return 0;
// }

// int main(int argc, char **argv)
// {
// 	printf("Hello world!\n");
// 	return 0;


// }
/////////////////////////////////////////////////////////////////////////////////////////////////////////////这里测试了使用std::move()返回左值右值的区别并不是很大
// Eigen::Isometry3d createFrame3d(){
// 	Eigen::Isometry3d T = Eigen::Isometry3d::Identity();
// 	Eigen::Vector3d t;
// 	t << 3.5, 3.3,3.4;
// 	T.pretranslate(t);

// 	return std::move(T);
// }

// long gettimes()
// {
// struct timespec time1 = {0, 0};
//     clock_gettime(CLOCK_REALTIME, &time1);
//     long nows = time1.tv_nsec+ time1.tv_sec *1000000000;
//     return nows;
// }



// int main(int argc, char ** argv)
// {
// 	Eigen::Isometry3d d = Eigen::Isometry3d::Identity();
// 	std::cout << d.matrix() << std::endl << std::endl;

// 	long t1 = gettimes();
// 	for (int i =0; i<10000;i++)
// 	std::cout << createFrame3d().matrix() << std::endl << std::endl;
	
// 	long t2 = gettimes();
// 	std::cout << std::endl << std::endl << t2-t1 << std::endl; 

// 	return 0;
// }


////////////////////////////////////////////////////////////////////////////////
// int main(int argc,char **argv)
// {
// 	Eigen::Vector6d  y;
// 	y<< 213,234324,3,24,3;
// 	std::cout << y[3] <<
// 	return 0;

// }

/////////////////////////////////////////////////////////////////////////////////////////////////测试静态成员变量的访问权限

// class a{
// 	public:
// 		static const int ss = 8;

// 		int hh (int hhc){
// 			return  ss+hhc;
// 		}

// };

// int main(int argc, char **argv)
// {
// 	a ao;
// 	cout << ao.hh(2) << endl;
// 	return 0;
// }

//////////////////////////////////////////////////////////////////////////////////////////////////测试 ?:
// int main (int argc,char **argv)
// {
// 	double a = 1;
// 	cout << std::asin(a)<<endl;

// 	cout << M_PI << endl;

// 	std::vector<double> d ={124,23213,2,13,21,3,34};
// 	d[5] = 9999+d[5];
// 	cout << std::acos(11.2/12) *57.3;	
// 	return 0;

// }

// int main(int argc, char **argv)
// {
// 	vector<double> sdf = {213,213,4535,76,456};
// 	vector<double> gg = {11,1,111};
// 	gg.insert(gg.end(),sdf.begin(),sdf.end());
// 	for (unsigned i = 0; i < gg.size(); i++)
//             std::cout << " " << gg[i];
//         std::cout << std::endl;
// 	return 0;

// }



// void output(int i)
// {
// 	cout << i << endl;
// }


// int main(int argc, char **argv)
// {
// 	for (unsigned i = 0; i<4;i++)
// 	{
// 		std::thread t(output,i);
// 		t.detach();
// 	}

// 	getchar();
// 	return 0;
// }

// #define dejavu "daixiahu"
// using namespace std;

// void oo (string s)
// {
// 	cout <<s <<endl;
// }

// int main()
// {
// 	const char* c;
//     string d(dejavu);
//     string a = "hello"+d+"fuck";
//     // string b = "world";
    
//     string e;
//     // e =a+d+b;
//     c =a.data();
//     cout <<c <<endl;
//     return 0;
// }

int main(int argc, char **argv)
{
	cout << getenv("LC_ALL") ;	
}




