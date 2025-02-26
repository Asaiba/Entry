#include <stdio.h>

typedef struct {
    float length;
    float width;
} Rectangle;

typedef struct {
    float radius;
} Circle;

typedef union {
    Rectangle rect;
    Circle circ;
} ShapeUnion;

typedef struct {
    ShapeUnion shape;
    char type;
} ShapeStruct;

int main() {
    ShapeStruct shapeStruct;
    ShapeUnion shapeUnion;

    printf("Size of Rectangle struct: %zu bytes\n", sizeof(Rectangle));
    printf("Size of Circle struct: %zu bytes\n", sizeof(Circle));
    printf("Size of Shape Struct: %zu bytes\n", sizeof(ShapeStruct));
    printf("Size of Shape Union: %zu bytes\n", sizeof(ShapeUnion));

    printf("\nMemory usage comparison:\n");
    printf("Size of Shape Struct (using struct): %zu bytes\n", sizeof(shapeStruct));
    printf("Size of Shape Union (using union): %zu bytes\n", sizeof(shapeUnion));

    if (sizeof(shapeStruct) > sizeof(shapeUnion)) {
        printf("ShapeUnion makes better use of memory.\n");
    } else {
        printf("ShapeStruct makes better use of memory.\n");
    }

    return 0;
}
