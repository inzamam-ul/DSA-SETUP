from heapq import heappush,heappop


courses = [[100,200],[200,1300],[1000,1250],[2000,3200]]

courses.sort(key=lambda x: x[1])
        
heap = []
max_time = 0
for time, end_time in courses:
    heappush(heap, -time)
    max_time += time
    if max_time > end_time:
        long_time = heappop(heap)
        max_time += long_time
        


print(heap)