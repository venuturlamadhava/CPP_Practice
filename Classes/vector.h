class point{
    public:
    double x,y;
    void offset(double offsetX,double offsetY);
    void print();
};

class vector{
 public:
  point start,end;
  void offset(double offsetX, double offsetY);
  void print();
};