#include "stats.h"

Statistics::Stats Statistics::ComputeStatistics(const std::vector<float>& arr) {
    //Implement statistics here
    Statistics::Stats returnObj;
    size_t arrCapacity = arr.capacity();

    if (arrCapacity == 0)
    {
        returnObj.average = NAN;
        returnObj.max = NAN;
        returnObj.min = NAN;
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
