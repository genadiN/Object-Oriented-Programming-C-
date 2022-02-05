
template<class KEY , class VALUE>
class Pair{
public:
    int key;
    int value;

    KEY getKey(){
        return key;
    }

    VALUE getValue() const{
        return value;
    }

    void setKey( KEY newKey){
        key = newKey;
    }

    void setValue( VALUE newValue){
        this->value = newValue;
    }
};
template<class KEY , class VALUE>
void Pair<KEY , VALUE>::setValue( VALUE newValue){
    this->value = newValue;
}

void Pair<int , bool>:: setValue ( bool newValue){
    std::cout << "hello from int bool\n";
    value = newValue;
}

int main(){
    Pair<int , bool> pair;

}
