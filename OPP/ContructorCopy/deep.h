class Deep
{
private:
    /* data */
    int *data;
public:
    void set_data_value(int d);
    int get_data_value();

    Deep(int d);
    Deep(const Deep &source); //copy constructor
    ~Deep();
};


