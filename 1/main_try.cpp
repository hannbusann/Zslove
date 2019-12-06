#include <iomanip>
#include <fstream>
#include <utility>
#include <iostream>
#include <stdio.h>
// #include <Eigen/Geometry>
#include <sys/time.h>
#include <cmath>
#include <thread>
#include <string>
#include <stdlib.h>
#include <vector>
using namespace std;


// //////////////////////////////////////////////////////////////////////////////////// TODO
 //           std:: cout << "  :"<<  << " " << std::endl;


template<class T>
    inline void PrintVector(const std::vector<T> &vectorOb) {
        for (unsigned i = 0; i < vectorOb.size(); i++)
            std::cout << " " << vectorOb[i];
        std::cout << std::endl;
    }

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


// void dd(vector<double> &as)
// {
// 	as[2] ++;
// }
// int main(int argc, char **argv)
// {
// 	vector<double> a,b;
// 	a = {321,23,4,324};
// 	//a.insert(a.begin()+2,565);
// //	a.erase(a.begin()+1);
// 	//a = vector<double>(10,2);
// 	dd(a);
// 	b = {1,2,3,4};

// 	cout << a[2] << endl;;

// 	cout << std::sin(3.24) <<endl;
// 	return 0;	
// }







// int main (int argc, char **argv)
// {
// 	FILE *af;
// 	std::vector<double> row;
// 	std::vector<std::vector<double>> rc;
// 	af = fopen("/home/zjudancer/Zslove/1/a.txt", "r");
// 	int flag = 0;
// 	while(!feof(af))
// 	{
// 		double tmp;
// 		fscanf(af, "%lf", &tmp);

// 		cout << sizeof(tmp) <<endl;
// 		if( 6 == flag)
// 		{
// 			rc.push_back(row);
// 			row.clear();
// 			flag = 1;
// 			row.push_back(tmp);
// 		}
// 		else
// 		{
// 			row.push_back(tmp);
// 			flag++;
// 		}
// 	}

// 	fclose(af);

// 	PrintVector(rc[2]);

// }


// int main(int argc, char ** argv) 
// {
// 	ifstream af("/home/zjudancer/Zslove/1/a.txt");
// 	std::vector<double> row;
// 	std::vector<std::vector<double>> rc;
// 	int flag = 0;
// 	while(!af.eof())
// 	{
// 		double tmp;
// 		af>>tmp;
// 		cout <<fixed << setprecision(6) << tmp  <<endl;
// 		if( 13 == flag)
// 		{
// 			rc.push_back(row);
// 			row.clear();
// 			flag = 1;
// 			row.push_back(tmp);
// 		}
// 		else
// 		{
// 			row.push_back(tmp);
// 			flag++;
// 		}
// 	}
// 	PrintVector(rc[0]);
// 	PrintVector(rc[1]);
// }



int Char2Int(const char & buffer)
{
    int buffer_binary = int(buffer);
    if (buffer_binary <0)
    {
        buffer_binary +=256;
    }
    return buffer_binary;
}
/**
 * Nextchar 用于产生char*类型的的下一个或下几个元素
 * param current_add:指针位置
 * param whole_length:整个char*的长度
 * param iterator_position:目前指向的位置是第几个char
 * param next_count:下几个位置的char
 * return 这个char元素
 **/
char Nextchar(const char * current_add, int whole_length, int iterator_position , int next_count)
{
	int here;
	if(iterator_position+next_count >whole_length)
	{
		here = (iterator_position + next_count - whole_length) - iterator_position;
		return *(current_add+here);
	}
	else
	{
		return *(current_add+next_count);	
	}
}

unsigned short ModbusCRC( char *ptr, unsigned char size)
{
	unsigned short a, b, tmp, CRC16;
	CRC16 = 0xffff;
	for (a = 0; a < size; a++)
	{
		CRC16 = *ptr^CRC16;
		for (b = 0; b < 8; b++)
		{
			tmp = CRC16 & 0x0001;
			CRC16 = CRC16 >> 1;
			if (tmp)
				CRC16 = CRC16 ^ 0xa001;
		}
		*ptr++;
	}
	return (((CRC16 & 0x00FF) << 8) | ((CRC16 & 0xFF00) >> 8));
}

int main(int argc, char **  argv)
{
	// char buffer;

	// buffer = 0b01000001;
	// cout << "first buffer corresponding to 65th ASCII: " << buffer << endl;

	// buffer = 0b00100000;
	// cout << "Here should apears a space:'"<< buffer << "'" << endl;
	// cout << "the decimal number of a space: "<<int(buffer) << endl;
	// //when the binary expression of a char highest bit is i
	// buffer =0b10000001;
	// cout << "a char expression with unknown ASCII value:" << buffer << endl;
	// cout << "the value of this 128 turn into:" << int(buffer)+256 << endl;
	// cout << Char2Int(buffer) << endl;	
	// //直接cout一个char*的时候，系统是识别\0的，到这个地方就不接着往下了,\0相当于是一个标记,它的ascii码是0x00
	// char *buf;
	// buf="china\0china";
	// buffer = *(buf+3);
	// cout << buf[0] << buf[1] << buf[2] << buf[3] << int(buf[4]) << " " << buffer << endl;

	// char pp[6] = {00001010b, 00001011b, 00111101b, 11110011b, 00100010b, 11101011b};//0x0a, 0x0b ,0x3d, 0xf1 ,0xa3,0x2a};

	// unsigned short aa = ModbusCRC(pp,4);
	// cout << hex  << aa << endl;

	// // char buf[6] = "hello";
	
	// // cout << buf << endl;
	// // cout <<sizeof(buf) << endl;

	// // char * a = buf;
	// // cout << a << endl;
	// char l = 0x97;
	// char h = 0x1d;
	// cout <<(unsigned short)(Char2Int(l)) << endl;
	// cout << 0x0100 << endl;
	// cout <<(unsigned short)(h)<<endl;
	// cout << dec << (aa == ((	unsigned short)(Char2Int(l))*0x0100+(unsigned short)(h)))?(1):(0);


// a b 0 ef 33 b2
// 239
// b2 a b 0 ef 33
// 61235

	while(1)
	{

	};

}




