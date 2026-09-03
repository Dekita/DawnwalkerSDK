#include "MapLabel.h"

UMapLabel::UMapLabel() : UUserWidget(FObjectInitializer::Get()) {
    this->HoveredZ = 0;
}





bool UMapLabel::HandlesHover_Implementation() {
    return false;
}


