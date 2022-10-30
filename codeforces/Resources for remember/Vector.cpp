#include <iostream>
#include <stdlib.h>
#include <time.h>
#include <cassert>

using namespace std;

template <typename T>

class Vector {

    private:
        unsigned int capacity;
        unsigned int size;
        T* storage;
        double policy;

    private:
     void resize ()
        {
            cout << "resize"<< endl;
            int newSize = capacity * policy;
            T* ns = new T[newSize];
            for (int i=0; i < size; i++)
            {
                ns[i] = storage[i];
            }
            delete [] storage;
            storage = ns;
            capacity = newSize;
        }

    public:
        Vector(){
            capacity=10;
            size=0;
            storage= new T[capacity];
            policy = 1.5;
        }
        
        Vector(unsigned int c){
            capacity=c; 
            size=0;
            storage= new T[capacity];
            policy = 1.5;
        }
        
        ~Vector(){
            cout << "Destructor llamado." << endl;
            delete [] storage;
            }
        
        void push_back(T elem)
        {
            if (size == capacity)
            {
                resize ();
            }
            storage[size] = elem;
            size++;
        }
        
        unsigned int getSize(){
            return size;
            }
        unsigned int getCapacity(){
            return capacity;
            }
        
            T at(int p){
                return storage[p];
                }
            bool empty()
            {
                return size == 0;
            }
        
            unsigned int waste()
            {
                return capacity - size;
            }

        void push_front(T elem){
    
            if(size == capacity){
                resize();
            }
            T* ns = new T[capacity]; 
            ns[0] = elem;
            for (int x = 0, y = 1; x < size; x++,y++){
                ns[y] == storage[x];
            }
            delete [] storage;
            storage = ns;
            size++;
        }

       void pop_back(){  //elimina elemento del final
	      assert(!empty());
	        if(size==1){
	         delete [] storage;
	         size=0; 
	        }
	     else{
	     	T* a = new T[size-1];
	    	for(int i = 0; i<size-1; i++){
			    a[i] = storage[i];
		    } 
		    delete [] storage;
		    storage = a;
		    size--;
	  }
	}

        void shrink_to_fit (){
            T* ns = new T[size];
            for (int i = 0; i < size; i++)
            {
                ns[i] = storage[i];
            }
            delete [] storage;
            storage = ns;
            capacity = size;
        }

        void insert (T elem, unsigned int pos){

            T* ns = new T[capacity];
            int i,a;
            if(size + 1 == capacity){
                resize();
            }
            if(pos <= size){
                for(i = 0,a = 0; i < capacity; i++,a++){
                   
                    if(a == pos){
                        ns[pos] = elem;
                        i++;                        
                    }
                     ns[i] = storage[a];
                }
            }
            delete[] storage;
            size++;
            storage = ns;
            
        }

        void removepos (unsigned int pos){
            T* ns = new T[capacity];
            int i,a;
            if(size + 1 == capacity){
                resize();
            }
            if(pos <= size){
                for(i = 0,a = 0; i < capacity; i++,a++){
                   
                    if(a == pos){
                       a++;
                    }
                    ns[i] = storage[a];
                }
            }
            delete[] storage;
            size--;
            storage = ns;
        }

        // void front (Vector<T> v){
        //     v.at(0);
        // }

        void push_back (const Vector<T>& v){

            int sizeActual = size,sizeEntra = v.size;
            int newSZ = sizeActual + sizeEntra;
            
             while(sizeActual + sizeEntra >= capacity){
                resize();
            }
            
            int i,pos;

            for (i = sizeActual,pos = 0; i < newSZ ; i++,pos++)
            {
                storage[i]=v.storage[pos];
            }
            size = newSZ;
            
        }

        T front (){
            return storage[0];
        }

        T back (){
            return storage[size - 1];
        }

        void print ()
	{
		for (int i=0; i < size ; i++)
		{
			cout<< storage[i] << endl;
		}
	}

        void sort(){

            int i,j;
            T aux;

            for(i = 0; i <= (size - 1);i++){
                for(j = i + 1; j <= size; j++){
                    if (storage[j] > storage[i])
                    {
                        aux = storage[i];
                        storage[i] = storage[j];
                        storage[j] = aux;
                    }
                    
                }
            }
        }

        void push_random(){
            srand(time(NULL));
            int num;

             if (size == capacity)
            {
                resize ();
            }
            for(int i = 0; i < 10; i++){
                num=1+rand()%(101-1);
                storage[i] = num;
                size++;
            }
        }


        void remove (const T& e){
            int r = 1;
            int i,a;

            for(i = 0;r > 0; i++){
                 if(storage[i] == e){
                     a = i;
                    r = 0;
                 } 
            } 
            int j = 0;
           while(j < size - 1)
            {
                if(j == a){
                    for(int h = j + 1; h <= size - 1; h++){
                        storage[j] = storage[h];
                        j++;
                    }
                    j = size; 
                }
                j++;
            }        
            size--; 
        }

        void rotate (unsigned int b){
            unsigned int i,j;
            T aux;

            for ( i = 0; i < b; i++)
            {
                for ( j = 0; j < size-1; j++)
                {
                    int h = j;
                    aux = storage[j];
                    storage[j] = storage[h+1];
                    storage[h+1] = aux;
                }
            }
        }

         void split (Vector<T>& a,Vector<T>& b){ //Corregir
            unsigned int i = 0;

            while(i < size){
                T n = storage[i];
                if(i%2==0){
                    a.push_back(n);
                } 
                else{
                    b.push_back(n);
                }
                i++;
            }
            size = 0;
            //delete[] storage;
        }

        void merge (Vector<T>& a,Vector<T>& b){
            int i = 0 ,j = 0;
            while(i < a.size && j < b.size){
                if(a.storage[i] < b.storage[j]){
                    push_back(a.storage[i]);
                    i++;
                }
                else{
                    push_back(b.storage[j]);
                    j++;
                }
            }

            while(i < a.size){
                push_back(a.storage[i]);
                i++;
            }
            while(j < b.size){
                push_back(b.storage[j]);
                j++;
            }
            
            a.size = 0;
            b.size = 0;
            //delete[] a.storage;
            //delete[] b.storage;
        }

        void sortm(){
            if (size < 2){
                return;
            }
            else{
                Vector <T> li;
                Vector <T> ld;
                split(li,ld);
                cout<<"aquí 1"<<endl;
                li.sortm();
                ld.sortm();
                merge(li,ld);
                cout<<"aquí 2"<<endl;
            }
        }
        private:
        // void swap(){

        // }
        void partition(int low,int high){
            T pivot = storage[high];
            int i = low - 1;
            for (unsigned int j = low; i < high - 1; j++)
            {
                if(storage[j] < storage[pivot]){
                    i++;
                    swap(i,j);
                }
            }
            swap(i+1,high);
            return i + 1;
        }

        public:
        void quicksort(int low,int high){
            assert(low >= 0 && high < size); //no puede ser igual high a size?
            if(low < high){
                unsigned int pi = partition(low,high);
                quicksort(low,pi-1);
                quicksort(pi + 1,high);
            }
        }

        void quicksort(){
            quicksort(0,size-1);
        }
};

 void f(){
            Vector<int> q;
            Vector<int> p;
            for (int i=0; i < 10; i++)
            {
                if(i > 6){
                    q.push_back(7);
                    p.push_back(7);
                }
                else{
                    q.push_back(i);
                    p.push_back(i);
                }
            }
    //    p.print();
    //    cout<<endl;
    //    q.print();
       
       //Para testear el remove 
       cout<<"Las siguientes lineas son para remove"<<endl;
       cout<<"Vector sin remove de la primera concurrencia"<<endl;
       q.print();
       cout<<endl;
       cout<<"size del vector antes de un remove -> "<<q.getSize()<<endl;
       q.remove(7);
       cout<<"Vector con remove de la primera concurrencia"<<endl;
       q.print();
       cout<<endl;
       cout<<"size del vector desues de un remove -> "<<q.getSize()<<endl;
       cout<<endl;
       //Para testear el rotate
       cout<<endl;
       cout<<"Las siguientes lineas son para rotate"<<endl;
       cout<<"Vector sin rotar"<<endl;
       p.print();
       p.rotate(2);
       cout<<endl;
       cout<<"Vector con rotación"<<endl;
       p.print();
 }

int main(){
    cout << "Vectores." << endl;
    //f();
    Vector<int> a,b;
    
    
    for(int i = 0; i < 5; i++){
        a.push_back(i);
    }
    for(int i = 6; i < 11; i++){
        b.push_back(i);
    }

    Vector<int> p;

    p.push_random();
    p.sortm();
    cout<<endl;
    p.print();


    //Corregir

    // Vector<int> a,b;
    // z.split(a,b);
    // cout<<endl;
    // a.print();
    // cout<<endl;
    // b.print();
    // cout<<endl;

    // 
    

}