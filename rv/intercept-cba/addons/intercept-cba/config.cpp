class CfgPatches {
    class intercept_cba {
        units[] = {""};
        weapons[] = {};
        requiredVersion = 0.1;
        requiredAddons[] = { "Intercept_Core", "CBA_A3" };
        version = 0.1;
    };
};

class Intercept {
    class cba {
        class intercept_cba {
            pluginName = "intercept-cba";
        };
    };
};