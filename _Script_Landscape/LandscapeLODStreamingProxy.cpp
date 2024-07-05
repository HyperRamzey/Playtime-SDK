#include "..\FUObjectArray.hpp"
#include "..\_Script_CoreUObject\Class.hpp"
#include "..\_Script_Engine\StreamableRenderAsset.hpp"
#include "LandscapeLODStreamingProxy.hpp"
_Script_CoreUObject::Class* _Script_Landscape::LandscapeLODStreamingProxy::static_class() {
    static auto result = (_Script_CoreUObject::Class*)FUObjectArray::get()->find_uobject(L"Class /Script/Landscape.LandscapeLODStreamingProxy");
    return result;
}
