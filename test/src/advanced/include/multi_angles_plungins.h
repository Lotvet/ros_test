#ifndef MULTI_ANGLES_PUNGINS_H_
#define MULTI_ANGLES_PUNGINS_H_
// #include "advanced/multi_angles_base.h"
#include "./multi_angles_base.h"

namespace multiangeles_plugin_ns{
    class triangle : public multiangeles_base_ns::multiangeles_base
    {
        private:
            double triangle_length;
        public:
            triangle(){
                triangle_length = 0.0;
            };
            double get_length(){
                return triangle_length * 3;
            };
            void init(double length) {
                this->triangle_length = length;
            };
    };
    class quadrilateral : public multiangeles_base_ns::multiangeles_base
    {
        private:
            double quadrilateral_length;
        public:
            quadrilateral(){
                quadrilateral_length = 0.0;
            };
            double get_length(){
                return quadrilateral_length * 4;
            };
            void init(double length) {
                this->quadrilateral_length = length;
            };
    };
};

#endif