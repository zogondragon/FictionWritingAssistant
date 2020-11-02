#ifndef __ENGINE_H__
#define __ENGINE_H__

#include "Work.h"

namespace FWA
{
    class Engine
    {
        // This class represents an engine instance. Each FWA app has only one Engine instance.
        private:
        public:
            // Use Boost::serialization library for save and load operation.
            void saveWork(const Work& workToBeSaved, std::string whereTo);
            Work loadWork(std::string uniqueWorkId, std::string fromWhere);
    };
}
#endif
