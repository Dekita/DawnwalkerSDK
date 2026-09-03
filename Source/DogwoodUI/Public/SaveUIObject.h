#pragma once
#include "CoreMinimal.h"
#include "UObject/Object.h"
#include "UISaveInfo.h"
#include "SaveUIObject.generated.h"

UCLASS(Blueprintable)
class DOGWOODUI_API USaveUIObject : public UObject {
    GENERATED_BODY()
public:
    DECLARE_DYNAMIC_MULTICAST_DELEGATE(FSaveUpdatedDelegate);
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bIsNewSaveButton;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FUISaveInfo SaveInfo;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FSaveUpdatedDelegate OnSaveUpdated;
    
    USaveUIObject();

};

