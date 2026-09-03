#pragma once
#include "CoreMinimal.h"
#include "UObject/Object.h"
#include "MultiChoiceDialogDescriptor.generated.h"

UCLASS(Blueprintable)
class DOGWOODUI_API UMultiChoiceDialogDescriptor : public UObject {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FText Header;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FText> ButtonActions;
    
    UMultiChoiceDialogDescriptor();

};

