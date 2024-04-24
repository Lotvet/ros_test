#ifndef MULTI_ANGLES_BASE_H_
#define MULTI_ANGLES_BASE_H_

namespace multiangeles_base_ns{
    class multiangeles_base
    {
        protected:
            multiangeles_base(){}
        public:
            virtual double get_length() = 0;
            virtual void init(double length) = 0;
    };
};

#endif

