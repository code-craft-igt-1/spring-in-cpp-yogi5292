#include "stats.h"
#include <cfloat>

Statistics::Stats Statistics::ComputeStatistics(const std::vector<float>& arr) {
    //Implement statistics here
    Statistics::Stats returnObj;
    std::size_t arrCapacity = arr.capacity();

    if (arrCapacity == 0)
    {
        returnObj.average = nanf("");
        returnObj.max = nanf("");
        returnObj.min = nanf("");
    }
    else
    {
        float minValue = FLT_MAX;
        float maxValue = FLT_MIN;
        float total = 0;

        for (int i = 0; i < arrCapacity; i++)
        {
            if (minValue > arr[i])
            {
                minValue = arr[i];
            }

            if (maxValue < arr[i])
            {
                maxValue = arr[i];
            }

            total += arr[i];
        }

        returnObj.average = total / arrCapacity;
        returnObj.max = maxValue;
        returnObj.min = minValue;
    }

    return returnObj;
}
