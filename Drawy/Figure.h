#pragma once

namespace Drawy {
   class Figure
   {
   public:
      Figure();
      virtual ~Figure();

      virtual void Paint() const = 0;
   };

}