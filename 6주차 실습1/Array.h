#include <iostream>

#ifndef __ARRAY__
#define __ARRAY__

using namespace std;

class Array{
	protected:
		int *data;
		int len;
	public:
			Array(int size);	//size가 0 이하면 에러 출력 후 파일 종료, 양수면 new 연산자(malloc과 유사기능)을 통해 메모리 할당

			virtual ~Array();	//여기서 할당된 메모리 해제

			int length() const;	//배열 크기 반환

			virtual int& operator[](int i);	//원소 삽입하는 곳

			virtual int operator[](int i)const;

			void print();
};
#endif
