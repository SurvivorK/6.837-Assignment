## Ray Casting 1
### Camera
#### Description
• Eye point **e** (center)
• Orthobasis **u, v, w** (horizontal, up, -direction) 
• Field of view **angle**
• Image rectangle **height, width**
![](pictures/2021-07-18-11-04-32.png)

#### Perspective vs. Orthographic
![](pictures/2021-07-18-11-05-46.png)

Orthographic:
• Parallel projection
• No foreshortening
• No vanishing point

![](pictures/2021-07-18-11-08-07.png)

- Origin = center + (x-0.5)\*size\*horizontal + (y-0.5)\*size\*up
- Direction is constant

### Ray-Plane Intersection
#### Plane Representation
