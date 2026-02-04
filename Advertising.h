#pragma once
#include <string>
#include <ctime>

using namespace std;

enum class AdStatus {Pending, Approved,Sold};

class Advertising 
{
private:
    int AdvertisingId;
    string title;
    string description;
    double price;
    string category;
    string imagePath;
    int sellerId;
    AdStatus status;
    time_t createdAt;

public:
   Advertising();

    int getAdvertisingId() const;
    int getSellerId() const;
    double getPrice() const;
    AdStatus getStatus() const;

    void setStatus(AdStatus s);
};