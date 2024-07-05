#include "..\FUObjectArray.hpp"
#include "..\_Script_CoreUObject\Class.hpp"
#include "..\_Script_Engine\TextureCube.hpp"
#include "NiagaraDataInterface.hpp"
#include "NiagaraDataInterfaceCubeTexture.hpp"
_Script_Engine::TextureCube*& _Script_Niagara::NiagaraDataInterfaceCubeTexture::get_Texture() {
    return *(_Script_Engine::TextureCube**)((uintptr_t)this + 0x38);
}
_Script_CoreUObject::Class* _Script_Niagara::NiagaraDataInterfaceCubeTexture::static_class() {
    static auto result = (_Script_CoreUObject::Class*)FUObjectArray::get()->find_uobject(L"Class /Script/Niagara.NiagaraDataInterfaceCubeTexture");
    return result;
}
