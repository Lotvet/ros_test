#include"nodelet/nodelet.h"
#include"pluginlib/class_list_macros.h"

namespace my_nodelet_ns{
    class myplus_nodelet : public nodelet::Nodelet{
        public:
            myplus_nodelet(){
            }
    };
}

PLUGINLIB_EXPORT_CLASS(my_nodelet_ns::myplus_nodelet,nodelet::Nodelet)