#pragma once
#include "CoreMinimal.h"
#include "UObject/Object.h"
#include "HoudiniLandscapeOutput.generated.h"

class ALandscape;
class UHoudiniLandscapeTargetLayerOutput;

UCLASS(Blueprintable)
class HOUDINIENGINERUNTIME_API UHoudiniLandscapeOutput : public UObject {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    ALandscape* Landscape;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FString BakedName;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<UHoudiniLandscapeTargetLayerOutput*> Layers;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bCreated;
    
    UHoudiniLandscapeOutput();

};

