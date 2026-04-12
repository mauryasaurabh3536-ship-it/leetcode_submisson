class Solution {
public:
    vector<double> internalAngles(vector<int>& sides) {
      vector<double>v;
       sort(sides.begin(),sides.end());
       int a=sides[0];
       int b=sides[1];
       int c=sides[2];
       if(a+b>c){
        v.push_back(acos((b*b+c*c-a*a)/(2.0*b*c))*180/M_PI);
        v.push_back(acos((a*a+c*c-b*b)/(2.0*a*c))*180/M_PI);
        v.push_back(acos((a*a+b*b-c*c)/(2.0*a*b))*180/M_PI);
        sort(v.begin(),v.end());
        return v;
       }
       else return v;  
    }
};