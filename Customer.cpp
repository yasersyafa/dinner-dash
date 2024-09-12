#include "Customer.h"
#include <iostream>
#include <thread>
#include <chrono>

Customer::Customer() : emotionLevel(5) {}

void Customer::decrementEmotion(){
    if (emotionLevel > 1){
        emotionLevel--;
    }
    updateEmotionDisplay();
}

int Customer::getEmotionLevel() const {
    return emotionLevel;
}

void Customer::updateEmotionDisplay() const {
    std::cout << "Emosi Customer Saat Ini: " << emotionLevel << std::endl;
}

void Customer::startEmotionTimer(){
    while (emotionLevel > 1)
    {
        std::this_thread::sleep_for(std::chrono::seconds(1)); // Sleep for 1 second
        decrementEmotion(); // Decrement emotion
    }
    
}