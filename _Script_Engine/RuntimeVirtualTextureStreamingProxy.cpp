#include "..\FUObjectArray.hpp"
#include "..\_Script_CoreUObject\Class.hpp"
#include "RuntimeVirtualTextureStreamingProxy.hpp"
#include "Texture2D.hpp"
_Script_CoreUObject::Class* _Script_Engine::RuntimeVirtualTextureStreamingProxy::static_class() {
    static auto result = (_Script_CoreUObject::Class*)FUObjectArray::get()->find_uobject(L"Class /Script/Engine.RuntimeVirtualTextureStreamingProxy");
    return result;
}