#include "..\FUObjectArray.hpp"
#include "..\_Script_CoreUObject\Class.hpp"
#include "..\_Script_CoreUObject\Object.hpp"
#include "..\_Script_Engine\DataTable.hpp"
#include "ItemMigrationManager.hpp"
_Script_CoreUObject::Class* _Script_Playtime_Multiplayer::ItemMigrationManager::static_class() {
    static auto result = (_Script_CoreUObject::Class*)FUObjectArray::get()->find_uobject(L"Class /Script/Playtime_Multiplayer.ItemMigrationManager");
    return result;
}
void _Script_Playtime_Multiplayer::ItemMigrationManager::CreateBundleDataAssets(_Script_Engine::DataTable* BundlesDataTable) {
    return;
}
void _Script_Playtime_Multiplayer::ItemMigrationManager::CreateLoadingScreenDataAssets(_Script_Engine::DataTable* LoadingScreenDataTable) {
    return;
}
void _Script_Playtime_Multiplayer::ItemMigrationManager::CreateCosmeticDataAssets(_Script_Engine::DataTable* CosmeticsDataTable) {
    return;
}
void _Script_Playtime_Multiplayer::ItemMigrationManager::CreateAllAssets() {
    return;
}
void _Script_Playtime_Multiplayer::ItemMigrationManager::CreateActionAssets(_Script_Engine::DataTable* ActionsDataTable) {
    return;
}
