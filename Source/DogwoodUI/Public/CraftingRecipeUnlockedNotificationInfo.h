#pragma once
#include "CoreMinimal.h"
#include "NotificationInfo.h"
#include "CraftingRecipeUnlockedNotificationInfo.generated.h"

UCLASS(Blueprintable)
class DOGWOODUI_API UCraftingRecipeUnlockedNotificationInfo : public UNotificationInfo {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FText UnlockedRecipe;
    
    UCraftingRecipeUnlockedNotificationInfo();

};

