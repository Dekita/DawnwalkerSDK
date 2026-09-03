#pragma once
#include "CoreMinimal.h"
#include "UObject/Interface.h"
#include "UObject/NoExportTypes.h"
#include "DawnwalkerAudioBoneVelocities.generated.h"

UINTERFACE(Blueprintable)
class DAWNWALKER_API UDawnwalkerAudioBoneVelocities : public UInterface {
    GENERATED_BODY()
};

class IDawnwalkerAudioBoneVelocities : public IInterface {
    GENERATED_BODY()
public:
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    FVector GetHandRightBoneVelocity() const;
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    FVector GetHandLeftBoneVelocity() const;
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    FVector GetFootRightBoneVelocity() const;
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    FVector GetFootLeftBoneVelocity() const;
    
};

