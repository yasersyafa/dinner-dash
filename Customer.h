#ifndef CUSTOMER_H
#define CUSTOMER_H

class Customer
{
private:
    int emotionLevel;

public:
    Customer();
    void decrementEmotion();
    int getEmotionLevel() const;
    void updateEmotionDisplay() const;
    void startEmotionTimer();
};

#endif
