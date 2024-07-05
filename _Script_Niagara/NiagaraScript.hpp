#pragma once
#include <Windows.h>
#include <cstdint>
#include <string>
#include <string_view>
#include "..\_Script_NiagaraShader\NiagaraScriptBase.hpp"
namespace _Script_CoreUObject {
struct Class;
}
namespace _Script_Niagara {
#pragma pack(push, 1)
struct NiagaraScript : public _Script_NiagaraShader::NiagaraScriptBase {
    private: char pad_28[0x2b8]; public:
    void* get_Usage();
    void* get_UsageId();
    void* get_RapidIterationParameters();
    void* get_ScriptExecutionParamStore();
    void* get_ScriptExecutionBoundParameters();
    void* get_CachedScriptVMId();
    void* get_CachedScriptVM();
    void* get_CachedParameterCollectionReferences();
    void* get_CachedDefaultDataInterfaces();
    static _Script_CoreUObject::Class* static_class();
    void RaiseOnGPUCompilationComplete();
}; // Size: 0x2e0
#pragma pack(pop)
}
