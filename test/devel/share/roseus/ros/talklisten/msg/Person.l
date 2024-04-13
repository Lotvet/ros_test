;; Auto-generated. Do not edit!


(when (boundp 'talklisten::Person)
  (if (not (find-package "TALKLISTEN"))
    (make-package "TALKLISTEN"))
  (shadow 'Person (find-package "TALKLISTEN")))
(unless (find-package "TALKLISTEN::PERSON")
  (make-package "TALKLISTEN::PERSON"))

(in-package "ROS")
;;//! \htmlinclude Person.msg.html


(defclass talklisten::Person
  :super ros::object
  :slots (_name _age _height _accounts ))

(defmethod talklisten::Person
  (:init
   (&key
    ((:name __name) "")
    ((:age __age) 0)
    ((:height __height) 0.0)
    ((:accounts __accounts) 0)
    )
   (send-super :init)
   (setq _name (string __name))
   (setq _age (round __age))
   (setq _height (float __height))
   (setq _accounts (round __accounts))
   self)
  (:name
   (&optional __name)
   (if __name (setq _name __name)) _name)
  (:age
   (&optional __age)
   (if __age (setq _age __age)) _age)
  (:height
   (&optional __height)
   (if __height (setq _height __height)) _height)
  (:accounts
   (&optional __accounts)
   (if __accounts (setq _accounts __accounts)) _accounts)
  (:serialization-length
   ()
   (+
    ;; string _name
    4 (length _name)
    ;; int32 _age
    4
    ;; float32 _height
    4
    ;; int32 _accounts
    4
    ))
  (:serialize
   (&optional strm)
   (let ((s (if strm strm
              (make-string-output-stream (send self :serialization-length)))))
     ;; string _name
       (write-long (length _name) s) (princ _name s)
     ;; int32 _age
       (write-long _age s)
     ;; float32 _height
       (sys::poke _height (send s :buffer) (send s :count) :float) (incf (stream-count s) 4)
     ;; int32 _accounts
       (write-long _accounts s)
     ;;
     (if (null strm) (get-output-stream-string s))))
  (:deserialize
   (buf &optional (ptr- 0))
   ;; string _name
     (let (n) (setq n (sys::peek buf ptr- :integer)) (incf ptr- 4) (setq _name (subseq buf ptr- (+ ptr- n))) (incf ptr- n))
   ;; int32 _age
     (setq _age (sys::peek buf ptr- :integer)) (incf ptr- 4)
   ;; float32 _height
     (setq _height (sys::peek buf ptr- :float)) (incf ptr- 4)
   ;; int32 _accounts
     (setq _accounts (sys::peek buf ptr- :integer)) (incf ptr- 4)
   ;;
   self)
  )

(setf (get talklisten::Person :md5sum-) "4e04843c1d2645fee4293247734542c2")
(setf (get talklisten::Person :datatype-) "talklisten/Person")
(setf (get talklisten::Person :definition-)
      "string name
int32 age
float32 height
int32 accounts
")



(provide :talklisten/Person "4e04843c1d2645fee4293247734542c2")


