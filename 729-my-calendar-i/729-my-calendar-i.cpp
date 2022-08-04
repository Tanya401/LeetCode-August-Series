class MyCalendar {
     vector<pair<int,int>> v;
public:
   
    MyCalendar() {
//vector<pair<int,int>> v;
    }
    
    bool book(int start, int end) {
       for(pair<int,int> p: v){
           if(max(p.first,start) < min(p.second,end)) return false;
       }
         v.push_back({start,end});
        return true;
    }
};

/**
 * Your MyCalendar object will be instantiated and called as such:
 * MyCalendar* obj = new MyCalendar();
 * bool param_1 = obj->book(start,end);
 */