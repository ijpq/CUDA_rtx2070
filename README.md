# noob_CUDA

**原始**

Simulator is calculating positions correctly.
4096 Bodies: average 0.036 Billion Interactions / second

**线程优化**

Simulator is calculating positions correctly.
4096 Bodies: average 44.279 Billion Interactions / second
![img2](src/Snipaste_2020-08-27_16-39-39.png "线程性能")
![image1](src/Snipaste_2020-08-27_16-33-02.png "访存性能")

**增大线程块内线程数量**

Simulator is calculating positions correctly.
4096 Bodies: average 21.573 Billion Interactions / second
![img3](src/Snipaste_2020-08-27_16-41-25.png)

原因分析:线程块内线程同步消耗较多时间


**访存prefetch**

由于随机初始化必须在CPU上完成,只能在初始化完成后进行prefetch,加速效果不显著

Simulator is calculating positions correctly.
4096 Bodies: average 49.345 Billion Interactions / second
![img4](src/Snipaste_2020-08-27_16-45-48.png)

**线程块SM对齐**

Simulator is calculating positions correctly.
4096 Bodies: average 47.127 Billion Interactions / second

![img5](src/Snipaste_2020-08-27_17-20-01.png)




