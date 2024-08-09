#include "weather_data.h"
#include "current_conditions_display.h"
#include "statistics_display.h"
#include "forecast_display.h"

int main() {
    WeatherData weather_data;
    CurrentConditionsDisplay current_display(&weather_data);
    StatisticsDisplay statistics_display(&weather_data);
    ForecastDisplay forecast_display(&weather_data);

    // 模拟新的气象测量
    weather_data.SetMeasurements(80, 65, 30.4);
    weather_data.SetMeasurements(82, 70, 29.2);
    weather_data.SetMeasurements(78, 90, 29.2);
    return 0;
}