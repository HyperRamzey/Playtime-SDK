#include "..\FUObjectArray.hpp"
#include "..\_Script_CoreUObject\Class.hpp"
#include "..\_Script_Engine\Actor.hpp"
#include "DDGIVolume.hpp"
#include "DDGIVolumeComponent.hpp"
_Script_RTXGI::DDGIVolumeComponent*& _Script_RTXGI::DDGIVolume::get_DDGIVolumeComponent() {
    return *(_Script_RTXGI::DDGIVolumeComponent**)((uintptr_t)this + 0x220);
}
_Script_CoreUObject::Class* _Script_RTXGI::DDGIVolume::static_class() {
    static auto result = (_Script_CoreUObject::Class*)FUObjectArray::get()->find_uobject(L"Class /Script/RTXGI.DDGIVolume");
    return result;
}
