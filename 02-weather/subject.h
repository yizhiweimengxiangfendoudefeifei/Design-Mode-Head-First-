#pragma once
// 订阅者被称为观察者
class Observer {
public:
    virtual void Update(double temp, double humidity, double pressure) = 0;
};

// 出版者被称为主题
class Subject
{
public:
    virtual void RegisterObserver(Observer* o) = 0;
    virtual void RemoveObserver(Observer* o) = 0;
    virtual void NotifyObservers() = 0;

private:
    double temperature_;
    double humidity_;
    double pressure_;
};

class DisplayElement
{
public:
    virtual void Display() = 0;
};