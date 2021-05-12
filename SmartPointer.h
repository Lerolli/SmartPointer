

class SmartPointer {
private:
    int* memory;
    int* links_counter;
    void atach(const SmartPointer& other);
public:
    explicit SmartPointer(int MAX_SIZE);
    SmartPointer(const SmartPointer& ptr);
    ~SmartPointer();
    SmartPointer& operator=(const SmartPointer& obj);
    int get_count() const;
    void Free(SmartPointer smartPointer);
};