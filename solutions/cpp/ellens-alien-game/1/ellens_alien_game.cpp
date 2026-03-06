namespace targets {
// TODO: Insert the code for the alien class here
class Alien{
    public:
        Alien(int x, int y){
            x_coordinate = x;
            y_coordinate = y;
        }
        int get_x_coordinate(){
            return x_coordinate;
        }
        int get_y_coordinate(){
            return y_coordinate;
        }
        void set_x_coordinate(int x_new){
            this->x_coordinate = x_new;
        }
        void set_y_coordinate(int y_new){
            this->y_coordinate = y_new;
        }
        int get_health(){
            return health;
        }
        void set_health(int health){
            this->health = health;
        }
        bool is_alive(){
            return get_health() > 0;
        }
        bool teleport(int x_new, int y_new){
            this->set_x_coordinate(x_new);
            this->set_y_coordinate(y_new);
            return true;
        }
        bool collision_detection(Alien alien){
            return (this->get_x_coordinate() == alien.get_x_coordinate() && this->get_y_coordinate() == alien.get_y_coordinate());
        }
        bool hit(){
            if(get_health() > 0){
                this->set_health(get_health() - 1);
                return true;
            } else { return false; }
        }
        int x_coordinate{0};
        int y_coordinate{0};
        
    private:
        int health{3};
};
    
}  // namespace targets
