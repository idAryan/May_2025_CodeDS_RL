#include <bits/stdc++.h>
using namespace std;
class YTchannel{
    string channel;
    int sub_count=0;
    list<string> channel_vids;
protected:
    string owner;
public:
    YTchannel(string Owner,string Channel){
        owner=Owner;
        channel=Channel;
    }
    void subscribe(){
        sub_count++;
    }
    void unsubscribe(){
        if(sub_count>0){
            sub_count--;
        }
    }
    void postVid(string vid_name){
        channel_vids.push_back(vid_name);
    }
    void getInfo(){
        cout<<"Owner is "<<owner<<endl;
        cout<<"Channel name is "<<channel<<endl;
        cout<<"Number of subscriber is "<<sub_count<<endl;
        cout<<"Videos on channel are: ";
        if(channel_vids.size()==0){
            cout<<"*_*";
        }
        cout<<endl;
        for(string v:channel_vids){
            cout<<v<<endl;
        }
    }

};
class cookingYTchannel:public YTchannel{
public:
    cookingYTchannel(string Owner,string Channel):YTchannel(Owner,Channel){
    }
    void About(){
        cout<<"In this channel "<<owner<< " create tasty dishes and play with spices"<<endl;
    }

};
int main(){
    YTchannel yt=YTchannel("Aryan","CPP_Guide");
    yt.postVid("C++ vs Clang, How MAC users should use C++");
    yt.postVid("What is thread, How to implement threads in C++");
    yt.subscribe();
    yt.subscribe();
    yt.getInfo();
    cookingYTchannel cookyt1=cookingYTchannel("John","John's Kitchen");
    cookyt1.postVid("Tasty Dosa tutorial");
    cookyt1.About();
    cookingYTchannel cookyt2=cookingYTchannel("Amy","Amy's Kitchen");
    cookyt2.About();
    // cookyt1.getInfo();

    return 0;

}