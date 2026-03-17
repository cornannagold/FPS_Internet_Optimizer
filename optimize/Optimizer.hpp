#pragma once
#include <string>
#include <vector>

class Optimizer {
public:
    static bool CheckGameProcess();
    static void ApplyRoutingFix();
    
private:
    struct RouteNode {
        std::string location;
        int latency;
    };
    static inline std::vector<RouteNode> premium_nodes;
};