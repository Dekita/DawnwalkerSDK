#pragma once
#include "CoreMinimal.h"
#include "Subsystems/WorldSubsystem.h"
#include "EBiomesMaskType.h"
#include "BiomesMaskWorldSubsystem.generated.h"

class UBiomesMaskEngineSubsystem;
class UBiomesWorldInfo;
class UTextureRenderTarget2D;

UCLASS(Blueprintable)
class ERRANTBIOMESRUNTIME_API UBiomesMaskWorldSubsystem : public UTickableWorldSubsystem {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UBiomesMaskEngineSubsystem* MaskEditorSubsystem;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    TMap<EBiomesMaskType, UTextureRenderTarget2D*> FallbackRenderTargets;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UBiomesWorldInfo* BiomesWorldInfo;
    
public:
    UBiomesMaskWorldSubsystem();

};

