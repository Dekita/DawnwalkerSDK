#pragma once
#include "CoreMinimal.h"
#include "Kismet/BlueprintAsyncActionBase.h"
#include "AsyncAction_WaitForShaderCompilation.generated.h"

class UAsyncAction_WaitForShaderCompilation;
class UObject;

UCLASS(Blueprintable)
class REBELLOADING_API UAsyncAction_WaitForShaderCompilation : public UBlueprintAsyncActionBase {
    GENERATED_BODY()
public:
    DECLARE_DYNAMIC_MULTICAST_DELEGATE(FShadersCompiledDelegate);
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FShadersCompiledDelegate OnShadersCompiled;
    
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UObject* WorldContextObject;
    
public:
    UAsyncAction_WaitForShaderCompilation();

    UFUNCTION(BlueprintCallable, meta=(WorldContext="InWorldContextObject"))
    static UAsyncAction_WaitForShaderCompilation* WaitForShaderCompilation(UObject* InWorldContextObject);
    
};

