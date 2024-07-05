#pragma once
#include <Windows.h>
#include <cstdint>
#include <string>
#include <string_view>
#include "..\_Script_CoreUObject\LinearColor.hpp"
#include "..\_Script_CoreUObject\Quat.hpp"
#include "..\_Script_CoreUObject\Vector.hpp"
#include "..\_Script_CoreUObject\Vector2D.hpp"
#include "..\_Script_CoreUObject\Vector4.hpp"
#include "..\_Script_Engine\BlueprintFunctionLibrary.hpp"
namespace _Script_CoreUObject {
struct Class;
}
namespace _Script_Niagara {
struct NiagaraComponent;
}
namespace _Script_Niagara {
#pragma pack(push, 1)
struct NiagaraDataInterfaceArrayFunctionLibrary : public _Script_Engine::BlueprintFunctionLibrary {
    static _Script_CoreUObject::Class* static_class();
    void SetNiagaraArrayVectorValue(_Script_Niagara::NiagaraComponent* NiagaraSystem, void* OverrideName, int32_t Index, _Script_CoreUObject::Vector& Value, bool bSizeToFit);
    void SetNiagaraArrayVector4Value(_Script_Niagara::NiagaraComponent* NiagaraSystem, void* OverrideName, int32_t Index, _Script_CoreUObject::Vector4& Value, bool bSizeToFit);
    void SetNiagaraArrayVector4(_Script_Niagara::NiagaraComponent* NiagaraSystem, void* OverrideName, void*& ArrayData);
    void SetNiagaraArrayVector2DValue(_Script_Niagara::NiagaraComponent* NiagaraSystem, void* OverrideName, int32_t Index, _Script_CoreUObject::Vector2D& Value, bool bSizeToFit);
    void SetNiagaraArrayVector2D(_Script_Niagara::NiagaraComponent* NiagaraSystem, void* OverrideName, void*& ArrayData);
    void SetNiagaraArrayVector(_Script_Niagara::NiagaraComponent* NiagaraSystem, void* OverrideName, void*& ArrayData);
    void SetNiagaraArrayQuatValue(_Script_Niagara::NiagaraComponent* NiagaraSystem, void* OverrideName, int32_t Index, _Script_CoreUObject::Quat& Value, bool bSizeToFit);
    void SetNiagaraArrayQuat(_Script_Niagara::NiagaraComponent* NiagaraSystem, void* OverrideName, void*& ArrayData);
    void SetNiagaraArrayInt32Value(_Script_Niagara::NiagaraComponent* NiagaraSystem, void* OverrideName, int32_t Index, int32_t Value, bool bSizeToFit);
    void SetNiagaraArrayInt32(_Script_Niagara::NiagaraComponent* NiagaraSystem, void* OverrideName, void*& ArrayData);
    void SetNiagaraArrayFloatValue(_Script_Niagara::NiagaraComponent* NiagaraSystem, void* OverrideName, int32_t Index, float Value, bool bSizeToFit);
    void SetNiagaraArrayFloat(_Script_Niagara::NiagaraComponent* NiagaraSystem, void* OverrideName, void*& ArrayData);
    void SetNiagaraArrayColorValue(_Script_Niagara::NiagaraComponent* NiagaraSystem, void* OverrideName, int32_t Index, _Script_CoreUObject::LinearColor& Value, bool bSizeToFit);
    void SetNiagaraArrayColor(_Script_Niagara::NiagaraComponent* NiagaraSystem, void* OverrideName, void*& ArrayData);
    void SetNiagaraArrayBoolValue(_Script_Niagara::NiagaraComponent* NiagaraSystem, void* OverrideName, int32_t Index, bool& Value, bool bSizeToFit);
    void SetNiagaraArrayBool(_Script_Niagara::NiagaraComponent* NiagaraSystem, void* OverrideName, void*& ArrayData);
    _Script_CoreUObject::Vector GetNiagaraArrayVectorValue(_Script_Niagara::NiagaraComponent* NiagaraSystem, void* OverrideName, int32_t Index);
    _Script_CoreUObject::Vector4 GetNiagaraArrayVector4Value(_Script_Niagara::NiagaraComponent* NiagaraSystem, void* OverrideName, int32_t Index);
    void* GetNiagaraArrayVector4(_Script_Niagara::NiagaraComponent* NiagaraSystem, void* OverrideName);
    _Script_CoreUObject::Vector2D GetNiagaraArrayVector2DValue(_Script_Niagara::NiagaraComponent* NiagaraSystem, void* OverrideName, int32_t Index);
    void* GetNiagaraArrayVector2D(_Script_Niagara::NiagaraComponent* NiagaraSystem, void* OverrideName);
    void* GetNiagaraArrayVector(_Script_Niagara::NiagaraComponent* NiagaraSystem, void* OverrideName);
    _Script_CoreUObject::Quat GetNiagaraArrayQuatValue(_Script_Niagara::NiagaraComponent* NiagaraSystem, void* OverrideName, int32_t Index);
    void* GetNiagaraArrayQuat(_Script_Niagara::NiagaraComponent* NiagaraSystem, void* OverrideName);
    int32_t GetNiagaraArrayInt32Value(_Script_Niagara::NiagaraComponent* NiagaraSystem, void* OverrideName, int32_t Index);
    void* GetNiagaraArrayInt32(_Script_Niagara::NiagaraComponent* NiagaraSystem, void* OverrideName);
    float GetNiagaraArrayFloatValue(_Script_Niagara::NiagaraComponent* NiagaraSystem, void* OverrideName, int32_t Index);
    void* GetNiagaraArrayFloat(_Script_Niagara::NiagaraComponent* NiagaraSystem, void* OverrideName);
    _Script_CoreUObject::LinearColor GetNiagaraArrayColorValue(_Script_Niagara::NiagaraComponent* NiagaraSystem, void* OverrideName, int32_t Index);
    void* GetNiagaraArrayColor(_Script_Niagara::NiagaraComponent* NiagaraSystem, void* OverrideName);
    bool GetNiagaraArrayBoolValue(_Script_Niagara::NiagaraComponent* NiagaraSystem, void* OverrideName, int32_t Index);
    void* GetNiagaraArrayBool(_Script_Niagara::NiagaraComponent* NiagaraSystem, void* OverrideName);
}; // Size: 0x28
#pragma pack(pop)
}
