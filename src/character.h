typedef struct {
  int heigth;
  int width;

  int maxFrame;
  int curFrame;
  int frameCount;
  int frameDelay;
  bool limited;

  ALLEGRO_BITMAP *image;
} Sprite;

typedef struct {
  float x;
  float y;

  int heigth;
  int width;

  int dirX;
  int animationDirection;

  int speed;
  int damage;
  bool fired;
  bool ready;

  int releaseFrame;

  ALLEGRO_BITMAP *image;
} Bullet;

typedef struct {

  int downKey;
  int upKey;
  int leftKey;
  int rightKey;
  int attack1Key;
  int attack2Key;

  int life;
  bool live;

  float x;
  float y;
  int dirX;
  int dirY;

  float velX;
  float velY;

  int animationDirection;

  Sprite running;
  Sprite idle;
  Sprite attack1;
  Sprite attack2;
  Sprite hurt;
  Sprite dying;

  Sprite current_sprite;

  Bullet bullet;
  Bullet bullet2;
} Character;

typedef struct {
  float x;
  float y;

  int dirX;
  
  float velX;

  ALLEGRO_BITMAP *image;
} Cloud;
