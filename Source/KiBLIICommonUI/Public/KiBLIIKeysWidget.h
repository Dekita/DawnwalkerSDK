#pragma once
#include "CoreMinimal.h"
#include "InputCoreTypes.h"
#include "Blueprint/UserWidget.h"
#include "KiBLIIKeysWidget.generated.h"

UCLASS(Abstract, Blueprintable, EditInlineNew)
class KIBLIICOMMONUI_API UKiBLIIKeysWidget : public UUserWidget {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FKey> Keys;
    
    UKiBLIIKeysWidget();

};

