#pragma once
#include <Windows.h>
#include <cstdint>
#include <string>
#include <string_view>
#include "..\_Script_CoreUObject\Object.hpp"
namespace _Script_CoreUObject {
struct Class;
}
namespace _Script_Engine {
struct DataTable;
}
namespace _Script_Playtime_Multiplayer {
#pragma pack(push, 1)
struct ItemMigrationManager : public _Script_CoreUObject::Object {
    static _Script_CoreUObject::Class* static_class();
    void CreateLoadingScreenDataAssets(_Script_Engine::DataTable* LoadingScreenDataTable);
    void CreateCosmeticDataAssets(_Script_Engine::DataTable* CosmeticsDataTable);
    void CreateBundleDataAssets(_Script_Engine::DataTable* BundlesDataTable);
    void CreateAllAssets();
    void CreateActionAssets(_Script_Engine::DataTable* ActionsDataTable);
}; // Size: 0x28
#pragma pack(pop)
}
