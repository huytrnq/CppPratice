
class Shallow 
{
    private:
        int *data;
    
    public:
        void set_data_value(int d);
        int get_data_value();

        //constructor
        Shallow(int d);
        ~Shallow();
};

