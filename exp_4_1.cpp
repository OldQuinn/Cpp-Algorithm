//
// Created by 韩鸿渐 on 2019/3/24.
//


# include <iostream>
using namespace std;


// practice 1: 声明一个 CPU 类，包含rank frequency voltage 等属性，有两个共有成员函数：run 和 stop。
// 其中，rank 为枚举类型 CPU_Rank，frequency 是单位为MHz的整数类型，voltage为浮点型的电压值。

enum CPU_Rank {P1 = 1, P2, P3, P4, P5, P6, P7};
class CPU{
    private:
        CPU_Rank rank;
        int frequency;
        float voltage;

    public:
        CPU(CPU_Rank r, int f, float v)   // 构造函数
        {
            rank = r;
            frequency = f;
            voltage = v;
            cout << "构造了一个CPU" << endl;
        }

        ~CPU() //析构函数
        {
            cout << "析构了一个CPU" << endl;
        }

        //外部接口
        CPU_Rank GetRank() const{return rank;}
        int GetFrequency() const{return frequency;}
        float GetVoltage() const{return voltage;}
        void SetRank(CPU_Rank r) {rank = r;}
        void SetFrequency(int f) {frequency = f;}
        void SetVoltage(float v) {voltage = v;}

        void Run() {cout << "CPU开始运行" << endl;}
        void Stop() {cout << "CPU停止运行" << endl;}


};

int main()
{
    CPU a(P6, 300, 2.8);
    a.Run();
    a.Stop();
    return 0;
}


