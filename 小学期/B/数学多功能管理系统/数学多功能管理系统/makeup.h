#pragma once
#include <iostream>
#include<string>
#include <cstdio>
using namespace std;
class makeup
{
    public:
		makeup();
		void sushu();
		void shuixianhua();
		void wanshu();
		void maopao();
		void zifu();
        ~makeup();
    private:
        string txt;
        string str[11];
};